#pragma once

namespace RenHook
{
    class Capstone
    {
    public:

        Capstone();
        Capstone(const Capstone&) = delete;
        Capstone(Capstone&&) = delete;

        ~Capstone();

        Capstone& operator=(const Capstone&) = delete;

        Capstone& operator=(Capstone&&) = delete;

        const size_t Disassemble(const uintptr_t Address, const size_t Size);

        const size_t GetInstructionSize(size_t Index) const;

        const size_t GetTotalNumberOfInstruction() const;

    private:

        csh m_handle;

        cs_insn* m_instructionInfo;

        size_t m_instructions;
    };
}
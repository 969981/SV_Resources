/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb168c; name: ~stringbuf
 */


/* std::stringbuf::~stringbuf() */

void __thiscall std::stringbuf::~stringbuf(stringbuf *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined **)this = PTR_vtable_047cb940 + 0x10;
  if ((((byte)this[0x40] & 1) != 0) && (lVar4 = *(long *)(this + 0x50), lVar4 != 0)) {
    lVar3 = tpidr_el0;
    plVar5 = *(long **)(lVar3 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar4,0,8);
        goto LAB_00bb16b8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0,8);
  }
LAB_00bb16b8:
  std::streambuf::~streambuf((streambuf *)this);
  return;
}



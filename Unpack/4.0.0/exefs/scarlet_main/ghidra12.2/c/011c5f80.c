/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c5f80; name: FUN_011c5f80
 */


int FUN_011c5f80(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839b78), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(long *)(DAT_04839b68 + 0x50);
    lVar3 = *(long *)(DAT_04839b68 + 0x58);
    if (lVar2 == lVar3) {
      iVar5 = 0;
    }
    else {
      if ((*(long *)(lVar2 + 0x78) == 0) || (*(short *)(*(long *)(lVar2 + 0x78) + 0x1a) == 0)) {
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
      }
      if (lVar2 + 0xd0 != lVar3) {
        if ((*(long *)(lVar2 + 0x148) == 0) || (*(short *)(*(long *)(lVar2 + 0x148) + 0x1a) == 0)) {
          iVar5 = iVar5 + 1;
        }
        if (lVar2 + 0x1a0 != lVar3) {
          if ((*(long *)(lVar2 + 0x218) == 0) || (*(short *)(*(long *)(lVar2 + 0x218) + 0x1a) == 0))
          {
            iVar5 = iVar5 + 1;
          }
          if (lVar2 + 0x270 != lVar3) {
            if ((*(long *)(lVar2 + 0x2e8) == 0) ||
               (*(short *)(*(long *)(lVar2 + 0x2e8) + 0x1a) == 0)) {
              iVar5 = iVar5 + 1;
            }
            if (lVar2 + 0x340 != lVar3) {
              if ((*(long *)(lVar2 + 0x3b8) == 0) ||
                 (*(short *)(*(long *)(lVar2 + 0x3b8) + 0x1a) == 0)) {
                iVar5 = iVar5 + 1;
              }
              if (lVar2 + 0x410 != lVar3) {
                if ((*(long *)(lVar2 + 0x488) == 0) ||
                   (*(short *)(*(long *)(lVar2 + 0x488) + 0x1a) == 0)) {
                  iVar5 = iVar5 + 1;
                }
                for (lVar2 = lVar2 + 0x4e0; lVar2 != lVar3; lVar2 = lVar2 + 0xd0) {
                  if ((*(long *)(lVar2 + 0x78) == 0) ||
                     (*(short *)(*(long *)(lVar2 + 0x78) + 0x1a) == 0)) {
                    iVar5 = iVar5 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar2 = *(long *)(DAT_04839b68 + 0x88);
    if (lVar2 == *(long *)(DAT_04839b68 + 0x90)) {
      iVar4 = 0;
    }
    else {
      if ((*(long *)(lVar2 + 0x78) == 0) || (*(short *)(*(long *)(lVar2 + 0x78) + 0x1a) == 0)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
      while (lVar3 = lVar2 + 0xc0, lVar3 != *(long *)(DAT_04839b68 + 0x90)) {
        plVar1 = (long *)(lVar2 + 0x138);
        lVar2 = lVar3;
        if ((*plVar1 == 0) || (*(short *)(*plVar1 + 0x1a) == 0)) {
          iVar4 = iVar4 + 1;
        }
      }
    }
    iVar4 = iVar4 + iVar5;
  }
  return iVar4;
}



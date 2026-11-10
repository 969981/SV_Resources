/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369f20; name: FUN_00369f20
 */


void FUN_00369f20(void)

{
  void *__ptr;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  
  lVar2 = 0;
  do {
    FUN_0038db20(&DAT_047f07e8 + lVar2 * 0x38);
    if ((&DAT_047f0810)[lVar2 * 7] != 0) {
      uVar1 = (&DAT_047f0818)[lVar2 * 7];
      if (uVar1 != 0) {
        uVar3 = 0;
        do {
          lVar4 = *(long *)((&DAT_047f0808)[lVar2 * 7] + uVar3 * 8);
          if (lVar4 != 0) {
            do {
              local_50 = lVar4 + 0x70;
              uStack_58 = *(undefined8 *)(lVar4 + 0x50);
              local_60 = lVar4;
              __ptr = (void *)FUN_0036a0b0(&local_60,3);
              free(__ptr);
              lVar4 = *(long *)(lVar4 + 0x68);
            } while (lVar4 != 0);
            uVar1 = (&DAT_047f0818)[lVar2 * 7];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar1 = FUN_003546b0();
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    free((void *)(&DAT_047f0808)[lVar2 * 7]);
    lVar2 = lVar2 + 1;
    if (lVar2 == 0x20) {
      return;
    }
  } while( true );
}



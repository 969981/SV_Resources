/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ed800; name: FUN_034ed800
 */


void FUN_034ed800(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar1 = DAT_048b0810;
  do {
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        DAT_048b0810 = 0;
        return;
      }
      lVar4 = *(long *)(DAT_048b0808 + (ulong)uVar1 * 8);
    } while (lVar4 == 0);
    if (*(long *)(lVar4 + 0x28) == 0) {
      if (*(long *)(lVar4 + 0x60) == 0) {
        if (*(long *)(lVar4 + 0x68) != -1) goto LAB_034ed88c;
      }
      else if (*(long *)(*(long *)(lVar4 + 0x60) + 0xa0) == 0) {
LAB_034ed88c:
        lVar3 = FUN_0349fff0(lVar4 + 0x60);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x460) == lVar4 || *(long *)(lVar3 + 0x460) == 0)) {
          *(undefined1 *)(lVar3 + 0x46c) = 0;
          *(undefined8 *)(lVar3 + 0x460) = 0;
        }
      }
    }
    FUN_03504ca4(lVar4);
    (**(code **)(puVar2 + 0x30))(5,lVar4);
  } while( true );
}



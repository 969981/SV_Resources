/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e78c8; name: FUN_005e78c8
 */


void FUN_005e78c8(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  do {
    if (lVar3 == lVar2) {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x005e799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar2,param_1[3] - lVar2,8);
      return;
    }
    param_1[2] = lVar3 + -0x70;
    if ((*(byte *)(lVar3 + -0x20) & 1) == 0) {
      if ((*(byte *)(lVar3 + -0x40) & 1) == 0) goto LAB_005e7900;
LAB_005e7930:
      (**(code **)(**(long **)(lVar3 + -0x28) + 0x18))
                (*(long **)(lVar3 + -0x28),*(undefined8 *)(lVar3 + -0x30),
                 *(ulong *)(lVar3 + -0x40) & 0xfffffffffffffffe,1);
      bVar1 = *(byte *)(lVar3 + -0x68);
    }
    else {
      (**(code **)(**(long **)(lVar3 + -8) + 0x18))
                (*(long **)(lVar3 + -8),*(undefined8 *)(lVar3 + -0x10),
                 *(ulong *)(lVar3 + -0x20) & 0xfffffffffffffffe,1);
      if ((*(byte *)(lVar3 + -0x40) & 1) != 0) goto LAB_005e7930;
LAB_005e7900:
      bVar1 = *(byte *)(lVar3 + -0x68);
    }
    if ((bVar1 & 1) != 0) {
      (**(code **)(**(long **)(lVar3 + -0x50) + 0x18))
                (*(long **)(lVar3 + -0x50),*(undefined8 *)(lVar3 + -0x58),
                 *(ulong *)(lVar3 + -0x68) & 0xfffffffffffffffe,1);
    }
    lVar3 = param_1[2];
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00140e10; name: FUN_00140e10
 */


void FUN_00140e10(long param_1,ulong *param_2,long *param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_3 + 1) & 0x3f;
  if (bVar1 == 4) {
    uVar4 = (ulong)*(byte *)(*param_3 + 0xb);
  }
  else {
    if (bVar1 != 0x14) {
      if (bVar1 != 5) {
        lVar3 = FUN_0013df20(param_1,param_3,4);
        if ((*(byte *)(lVar3 + 8) & 0xf) == 0) {
          FUN_00125b40(param_1,param_3,"get length of");
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x140f0c);
          (*pcVar2)();
        }
LAB_00140ed8:
        FUN_0013e0d0(param_1,lVar3,param_3,param_3,param_2);
        return;
      }
      lVar5 = *param_3;
      lVar3 = *(long *)(lVar5 + 0x28);
      if (((lVar3 != 0) && ((*(byte *)(lVar3 + 10) >> 4 & 1) == 0)) &&
         (lVar3 = FUN_0013dec0(lVar3,4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x138)),
         lVar3 != 0)) goto LAB_00140ed8;
      uVar4 = FUN_0013d7f0(lVar5);
      *param_2 = uVar4;
      goto LAB_00140ea0;
    }
    uVar4 = *(ulong *)(*param_3 + 0x10);
  }
  *param_2 = uVar4;
LAB_00140ea0:
  *(undefined1 *)(param_2 + 1) = 3;
  return;
}



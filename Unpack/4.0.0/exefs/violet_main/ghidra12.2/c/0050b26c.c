/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050b26c; name: FUN_0050b26c
 */


void FUN_0050b26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004f48a0(param_3,param_2,param_4);
  FUN_0050b39c(param_1,param_2,0xffffffff,iVar2,param_3,param_4,param_5);
  (**(code **)(*param_5 + 0x28))(param_5,&DAT_03c17da2,3);
  if ((0 < iVar2) && (FUN_0050a1c8(param_1,param_2,param_3,param_4,0,param_5), iVar2 != 1)) {
    iVar3 = 1;
    do {
      (**(code **)(*param_5 + 0x28))(param_5,&DAT_03c82382,2);
      FUN_0050a1c8(param_1,param_2,param_3,param_4,iVar3,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  puVar1 = &DAT_03c33d7e;
  if (*(char *)(param_1 + 4) != '\0') {
    puVar1 = &DAT_03bf4f7f;
  }
                    /* WARNING: Could not recover jumptable at 0x0050b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x28))(param_5,puVar1,2);
  return;
}



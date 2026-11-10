/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f3918; name: FUN_034f3918
 */


undefined8 FUN_034f3918(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long local_38;
  
  uVar3 = (**(code **)(*param_3 + 0x28))(param_3);
  puVar1 = PTR_DAT_047e70e8;
  if ((uVar3 & 1) != 0) {
    local_38 = 0;
    lVar4 = FUN_03468d28(*(undefined8 *)PTR_DAT_047e70e8,*(undefined4 *)((long)param_2 + 0xc),
                         &local_38);
    if (lVar4 != 0) {
      iVar2 = (**(code **)(*param_3 + 0x30))(param_3,lVar4,*param_2);
      if (iVar2 == 1) {
        if ((*param_2 != 0) && (*(int *)((long)param_2 + 0xc) != -1)) {
          FUN_03468ed8(*(undefined8 *)puVar1);
          if (param_2[2] != 0) {
            FUN_0346034c(param_2[2],0);
          }
        }
        *param_2 = lVar4;
        param_2[2] = local_38;
        return 1;
      }
      FUN_03468ed8(*(undefined8 *)puVar1,*(undefined4 *)((long)param_2 + 0xc));
      if (local_38 != 0) {
        FUN_0346034c(local_38,0);
      }
    }
  }
  return 0;
}



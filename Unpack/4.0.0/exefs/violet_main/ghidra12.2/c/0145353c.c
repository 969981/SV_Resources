/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145353c; name: FUN_0145353c
 */


void FUN_0145353c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&DAT_04604558;
  param_1[4] = (long)&PTR_LAB_046045f0;
  param_1[5] = (long)&DAT_04604640;
  if (param_1[0x44] != 0) {
    FUN_0145361c(param_1 + 0x44);
    lVar5 = param_1[0x44];
    lVar4 = param_1[0x46];
    plVar6 = (long *)param_1[0x47];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar5,lVar4 - lVar5,8);
        goto LAB_014535b8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
  }
LAB_014535b8:
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_01453688(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6d220; name: FUN_00c6d220
 */


void FUN_00c6d220(long *param_1,float *param_2,int *param_3,undefined1 *param_4,long param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  int local_28;
  int local_24;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)(*(long *)(DAT_0485a0f0 + 0x30) + param_5 * 0x30 + 0x20);
  }
  if ((param_2 == (float *)0x0) && (param_3 == (int *)0x0)) {
    return;
  }
  if ((param_6 & 1) == 0) {
    local_60 = 0x385e1419bea9d841;
    puStack_58 = PTR_s_ResolutionWidth_047dcf98;
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,&local_60,&local_24);
    if ((uVar3 & 1) != 0) {
      local_80 = 0x3a6b9c3a7665a410;
      puStack_78 = PTR_s_ResolutionHeight_047dcfa0;
LAB_00c6d2cc:
      local_70 = 0x1f;
      local_68 = (long *)0x0;
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_80,&local_28);
      uVar2 = uVar2 ^ 1;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      goto LAB_00c6d2fc;
    }
  }
  else {
    local_60 = 0xd0ae1f83d5073d77;
    puStack_58 = PTR_s_ResolutionWidth2D_047d8e58;
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,&local_60,&local_24);
    if ((uVar3 & 1) != 0) {
      local_80 = 0x6b0411245f14fbe6;
      puStack_78 = PTR_s_ResolutionHeight2D_047d8e60;
      goto LAB_00c6d2cc;
    }
  }
  uVar2 = 1;
LAB_00c6d2fc:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((uVar2 & 1) == 0) {
    fVar6 = (float)local_24;
    fVar5 = (float)local_28;
    if (param_2 != (float *)0x0) {
      puVar1 = (undefined8 *)(*(long *)(DAT_0485a0f0 + 0x30) + param_5 * 0x30);
      uVar8 = puVar1[1];
      uVar7 = *puVar1;
      *param_2 = fVar6 * (float)uVar7;
      param_2[1] = fVar5 * (float)((ulong)uVar7 >> 0x20);
      param_2[2] = fVar6 * (float)uVar8;
      param_2[3] = fVar5 * (float)((ulong)uVar8 >> 0x20);
    }
    if (param_3 != (int *)0x0) {
      lVar4 = *(long *)(DAT_0485a0f0 + 0x30) + param_5 * 0x30;
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      *param_3 = (int)(fVar6 * (float)uVar7);
      param_3[1] = (int)(fVar5 * (float)((ulong)uVar7 >> 0x20));
      param_3[2] = (int)(fVar6 * (float)uVar8);
      param_3[3] = (int)(fVar5 * (float)((ulong)uVar8 >> 0x20));
    }
  }
  return;
}



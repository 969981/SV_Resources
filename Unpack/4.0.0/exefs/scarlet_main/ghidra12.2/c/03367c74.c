/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03367c74; name: FUN_03367c74
 */


undefined8 FUN_03367c74(long *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar4 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                       *(int *)(param_2 + 1) - (int)*param_2,1);
  local_58 = 0xffffffff;
  local_68 = param_3;
  uStack_60 = uVar4;
  uVar3 = FUN_0336eabc(param_1,&local_68);
  if (*(uint *)(param_1 + 1) == uVar3) {
    plVar5 = (long *)(*(code *)**(undefined8 **)param_1[0xc])();
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,0x70);
    if ((param_4 & 1) == 0) {
      *puVar6 = 0x30800f;
      puVar6[1] = 0;
      puVar6[4] = PTR_DAT_047e66c0;
      puVar6[5] = uVar4;
      puVar6[2] = 6;
      puVar6[3] = param_3;
      puVar6[8] = 0x1000;
      puVar6[6] = 0;
      puVar6[7] = 0x80008;
    }
    else {
      *puVar6 = 0x30800f;
      puVar6[1] = 0;
      puVar2 = PTR_DAT_047e66c0;
      puVar6[2] = 6;
      puVar6[3] = param_3;
      puVar6[0xb] = 1;
      puVar6[0xc] = param_3;
      puVar6[7] = 0x80008;
      puVar6[8] = 0x1000;
      puVar6[4] = puVar2;
      puVar6[5] = uVar4;
      puVar6[10] = 0;
      puVar6[6] = puVar6 + 10;
      puVar6[0xd] = &DAT_03c4f61e;
    }
    uVar4 = (**(code **)(*(long *)param_1[0xc] + 0x30))();
    puVar6[4] = uVar4;
    iVar7 = (int)param_1[1];
    lVar8 = (long)iVar7;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_0336ec68(param_1,PTR_PTR_047d1a50,lVar8 + 1);
      iVar7 = (int)param_1[1];
    }
    puVar1 = (undefined8 *)(*param_1 + (long)iVar7 * 0x20);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    puVar1[2] = local_58;
    puVar1[3] = puVar6;
    *(int *)(param_1 + 1) = (int)(lVar8 + 1);
  }
  return *(undefined8 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1b) + 0x18);
}



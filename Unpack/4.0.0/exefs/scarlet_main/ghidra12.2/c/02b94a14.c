/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b94a14; name: FUN_02b94a14
 */


ulong FUN_02b94a14(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_70;
  long local_68;
  long local_60;
  long *local_58;
  
  do {
    lVar10 = param_1[0xf] - param_1[0xe];
    if (lVar10 == 0) {
      uVar7 = param_1[1];
      uVar8 = (long)(uVar7 - *param_1) >> 7;
      plVar2 = param_1 + 3;
      if (uVar7 < (ulong)param_1[2]) {
        FUN_02b94d30(plVar2,uVar7,param_2);
        param_1[1] = uVar7 + 0x80;
      }
      else {
        lVar3 = FUN_023747b0(param_1,uVar8 + 1);
        lVar10 = *param_1;
        lVar9 = param_1[1];
        local_60 = 0;
        lVar4 = 0;
        local_58 = plVar2;
        if ((lVar3 != 0) &&
           (lVar4 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,lVar3 << 7,0x10),
           lVar4 == 0)) {
          (**(code **)(*(long *)*plVar2 + 0xe8))((long *)*plVar2);
        }
        lVar10 = lVar4 + (lVar9 - lVar10 >> 7) * 0x80;
        local_60 = lVar4 + lVar3 * 0x80;
        local_70 = lVar10;
        FUN_02b94d30(plVar2,lVar10,param_2);
        local_68 = lVar10 + 0x80;
        FUN_02374800(plVar2,*param_1,param_1[1],&local_70);
        lVar4 = *param_1;
        lVar10 = param_1[1];
        lVar9 = param_1[2];
        *param_1 = local_70;
        param_1[1] = local_68;
        param_1[2] = local_60;
        local_70 = lVar4;
        local_68 = lVar10;
        local_60 = lVar9;
        while (lVar3 = lVar10, lVar3 != lVar4) {
          lVar10 = lVar3 + -0x80;
          pcVar5 = *(code **)(lVar3 + -0x78);
          local_68 = lVar10;
          if (pcVar5 != (code *)0x0) {
            *(undefined8 *)(lVar3 + -0x70) = 0;
            *(undefined8 *)(lVar3 + -0x68) = 0;
            *(undefined8 *)(lVar3 + -0x80) = 0;
            *(undefined8 *)(lVar3 + -0x78) = 0;
            (*pcVar5)(lVar3 + -0x60);
          }
        }
        if (lVar4 != 0) {
          lVar9 = lVar9 - lVar4;
          plVar2 = (long *)*local_58;
          uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar9,0x10);
          }
          else {
            FUN_00c48fe8(plVar2,lVar4,lVar9,0x10);
          }
        }
      }
      param_1[0x15] = uVar8 + 1;
      return uVar8;
    }
    uVar8 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar10 + param_1[0xe] + -8;
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar8);
  puVar1 = (undefined8 *)(*param_1 + uVar8 * 0x80);
  pcVar5 = (code *)puVar1[1];
  if (pcVar5 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar5)(puVar1 + 4);
  }
  memcpy(puVar1 + 4,param_2,0x28);
  uVar6 = *(undefined8 *)((long)param_2 + 0x28);
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = uVar6;
  FUN_00c96b7c(puVar1 + 10,(long)param_2 + 0x30);
  puVar1[0xc] = *(undefined8 *)((long)param_2 + 0x40);
  puVar1[0xd] = *(undefined8 *)((long)param_2 + 0x48);
  puVar1[0xe] = *(undefined8 *)((long)param_2 + 0x50);
  plVar2 = *(long **)((long)param_2 + 0x58);
  puVar1[0xf] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *puVar1 = &LAB_02b94e90;
  puVar1[1] = &LAB_02b94e98;
  puVar1[2] = &LAB_02b94fb8;
  puVar1[3] = &LAB_02b9503c;
  if ((ulong)param_1[0x15] <= uVar8) {
    param_1[0x15] = uVar8 + 1;
  }
  return uVar8;
}



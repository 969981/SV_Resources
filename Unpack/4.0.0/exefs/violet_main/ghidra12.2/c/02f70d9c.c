/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f70d9c; name: FUN_02f70d9c
 */


void FUN_02f70d9c(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x738) == 0) {
    return;
  }
  FUN_02f6d978();
  if (param_2 == (long *)0x0) goto LAB_02f71004;
  lVar6 = *param_2;
  if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
    (**(code **)(lVar6 + 0x18))(&DAT_03c28f4c,3,*(undefined8 *)(lVar6 + 0x28));
  }
  puVar4 = (undefined8 *)param_2[2];
  uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
  if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
    *puVar4 = &DAT_03c28f4a;
  }
  if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    lVar6 = *param_2;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("buildJac",8,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar4 = (undefined8 *)param_2[2];
    uVar1 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
    if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "YtbuildJac";
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (param_2[6] != 0)) {
      puVar4 = (undefined8 *)param_2[2];
      uVar1 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar1 <= (ulong)param_2[3]) && (param_2[2] = uVar1, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      }
    }
    lVar6 = *param_2;
    if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70f2c:
      puVar2 = (undefined8 *)param_2[2];
      puVar3 = (undefined8 *)param_2[3];
    }
    else {
      puVar4 = (undefined8 *)param_2[2];
      puVar3 = (undefined8 *)param_2[3];
      puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
      if (puVar3 < puVar2) goto LAB_02f70f2c;
      param_2[2] = (long)puVar2;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(param_2[6] + 8);
        goto LAB_02f70f2c;
      }
    }
    puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
    if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x138);
      *puVar2 = &DAT_03c65669;
      puVar2[1] = uVar5;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  lVar6 = *param_2;
  if (((*(byte *)(lVar6 + 0x38) & 1) == 0) || (param_2[6] == 0)) {
LAB_02f70fbc:
    puVar2 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
  }
  else {
    puVar4 = (undefined8 *)param_2[2];
    puVar3 = (undefined8 *)param_2[3];
    puVar2 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff8);
    if (puVar3 < puVar2) goto LAB_02f70fbc;
    param_2[2] = (long)puVar2;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_03c4e575;
      puVar4[1] = *(undefined8 *)(param_2[6] + 8);
      goto LAB_02f70fbc;
    }
  }
  puVar4 = (undefined8 *)((long)puVar2 + 0x1fU & 0xfffffffffffffff8);
  if ((puVar4 <= puVar3) && (param_2[2] = (long)puVar4, puVar2 != (undefined8 *)0x0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x118);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x120);
    *puVar2 = &DAT_03c65669;
    puVar2[1] = uVar5;
  }
  if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
    (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
  }
LAB_02f71004:
  FUN_02f6e6dc(param_1 + 0x140,param_2);
  FUN_02f6fe00(param_1 + 0x350,param_2);
  FUN_02f70538(param_1 + 0x538,param_2);
  return;
}



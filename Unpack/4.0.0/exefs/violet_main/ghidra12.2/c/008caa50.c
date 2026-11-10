/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008caa50; name: FUN_008caa50
 */


void FUN_008caa50(long param_1,long param_2,long param_3,uint param_4,byte param_5,
                 undefined8 param_6,long param_7,code *param_8,code *param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_6c;
  long local_68;
  
  lVar1 = *(long *)(param_3 + 0x98);
  if ((((*(char *)(*(long *)(param_3 + 0xa0) + 0x750) == '\0') || (*(char *)(param_3 + 2) == '\0'))
      || (*(float *)(param_3 + 0x70) <= 0.0)) ||
     ((*(int *)(param_3 + 0x28) < 1 &&
      ((*(int *)(param_3 + 0x28) != 0 || (2 < *(int *)(*(long *)(param_3 + 0x238) + 0x330) - 1U)))))
     ) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  uVar4 = 1 << (ulong)(*(uint *)(param_3 + 0x400) & 0x1f);
  uVar2 = *(uint *)(param_3 + 0x40);
  uVar3 = *(uint *)(param_7 + 0x10);
  uVar5 = FUN_008e5e30(*(undefined8 *)(param_1 + 0x20),(long)(int)uVar4);
  *(undefined8 *)(param_3 + 0x3f8) = uVar5;
  if ((((lVar1 != 0) && (!bVar7)) && (((uVar3 & uVar2) != 0 && ((uVar4 & param_4) != 0)))) &&
     ((param_8 == (code *)0x0 ||
      (local_a0 = param_3, uStack_98 = param_6, uVar6 = (*param_8)(&local_a0), (uVar6 & 1) != 0))))
  {
    if (param_9 == (code *)0x0) {
      FUN_008e5d3c(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_5 & 1,param_6,param_7);
    }
    else {
      local_7c = *(undefined4 *)(param_7 + 0x14);
      local_70 = *(undefined4 *)(param_1 + 0x30);
      local_6c = param_5 & 1;
      local_90 = 0;
      local_80 = 0;
      local_a0 = param_2;
      uStack_98 = *(undefined8 *)(param_1 + 0x20);
      lStack_88 = param_3;
      local_78 = param_6;
      local_68 = param_7;
      (*param_9)(&local_a0);
    }
  }
  return;
}



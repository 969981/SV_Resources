/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03432404; name: FUN_03432404
 */


undefined1  [16]
FUN_03432404(undefined8 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  float local_78;
  undefined1 local_74;
  undefined1 local_73;
  
  *param_1 = param_5;
  lVar6 = *(long *)(*(long *)(param_3 + 8) + 0x58);
  lVar5 = *(long *)(param_3 + 0x20);
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x28) + 0x20) + (param_4 & 0xffffffff) * 0x28
  ;
  uVar1 = *(undefined4 *)(lVar4 + 0x18);
  uVar2 = *(undefined4 *)(lVar4 + 0x1c);
  uVar3 = *(undefined4 *)(lVar4 + 0x20);
  if (*(char *)(lVar6 + 200) == '\0') {
    fVar7 = *(float *)(lVar6 + 0xb4);
  }
  else {
    lVar4 = *(long *)(lVar6 + 0xa0);
    if (lVar4 == 0) {
      fVar7 = 0.0;
    }
    else {
      do {
        fVar7 = (float)FUN_034cd368(lVar4);
        lVar4 = *(long *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
    if (fVar7 < *(float *)(lVar6 + 0xb4)) {
      *(undefined4 *)(lVar6 + 0xc0) = 1;
      *(undefined4 *)(lVar6 + 0xb8) = *(undefined4 *)(lVar6 + 0xb8);
    }
    *(float *)(lVar6 + 0xb4) = fVar7;
    *(undefined1 *)(lVar6 + 200) = 0;
  }
  lVar4 = *(long *)(*(long *)(param_3 + 8) + 0x58);
  local_74 = false;
  if (*(int *)(PTR_DAT_047e6e68 + 0xc) != 0) {
    if (*(float *)(lVar4 + 100) <= 0.0) {
      local_74 = false;
    }
    else if (*(int *)(lVar4 + 0xa8) < 1) {
      local_74 = *(int *)(lVar4 + 0x60) != 0;
    }
    else {
      local_74 = true;
    }
  }
  local_78 = *(float *)(param_3 + 0x74) +
             fVar7 * *(float *)(*(long *)(*(long *)(lVar6 + 8) + 0x28) + 0x50);
  local_80 = lVar5 + (param_4 & 0xffffffff) * 0x90;
  local_73 = 0 < *(int *)(lVar4 + 0xac);
  lStack_88 = local_80 + 0x30;
  local_90 = local_80 + 0x48;
  lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x40);
  local_b0 = *(undefined4 *)(lVar4 + 0x78);
  uStack_ac = *(undefined4 *)(lVar4 + 0x7c);
  local_a8 = *(undefined4 *)(lVar4 + 0x80);
  local_a0 = uVar1;
  uStack_9c = uVar2;
  local_98 = uVar3;
  FUN_034325c0(param_1,&local_b0,param_2 + 0x50,&local_a0);
  *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)((long)param_1 + 0x24);
  return ZEXT816(0);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212a158; name: FUN_0212a158
 */


void FUN_0212a158(undefined8 param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  code *local_b8;
  undefined1 auStack_a0 [96];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_b8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_a0);
    local_b8 = *(code **)(param_3 + 8);
  }
  piVar3 = (int *)*param_2;
  if (((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x17) ||
      (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar5 == 0)) ||
     (puVar4 = (uint *)((long)piVar3 + uVar5), piVar3 = (int *)((long)puVar4 + (ulong)*puVar4),
     *piVar3 == 0)) {
    bVar1 = 1;
  }
  else {
    puVar4 = (uint *)(piVar3 + 1);
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
    piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
    if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
      bVar2 = *(char *)((long)piVar3 + uVar5) == '\0';
      bVar1 = 0;
      goto LAB_0212a22c;
    }
    bVar1 = 0;
  }
  bVar2 = true;
LAB_0212a22c:
  uVar6 = 0;
  if (!(bool)(bVar1 | bVar2)) {
    uVar6 = 0x3f800000;
  }
  local_40 = 0x757527f9d900520e;
  pcStack_38 = "Global";
  local_30 = 6;
  uStack_28 = 0;
  FUN_01288dac(uVar6,param_2,"PfxRadialBlurEnable",&local_40);
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294f200; name: FUN_0294f200
 */


byte FUN_0294f200(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_7c [11];
  undefined4 local_38;
  undefined1 local_34;
  
  local_34 = FUN_02943aa0();
  local_38 = 5;
  bVar1 = FUN_02943d30(param_1,&local_38,local_7c);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    uVar4 = (ulong)bVar1;
    puVar5 = local_7c;
    bVar3 = 0;
    do {
      local_ac = *puVar5;
      local_90 = 0;
      uStack_88 = 0;
      local_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0[0] = 1;
      uVar2 = FUN_0293e520(param_1,local_b0);
      bVar1 = bVar3;
      if ((uVar2 & 1) != 0) {
        bVar1 = bVar3 + 1;
        *(undefined4 *)(param_3 + (ulong)bVar3 * 4) = *puVar5;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      bVar3 = bVar1;
    } while (uVar4 != 0);
  }
  return bVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d88fc; name: FUN_021d88fc
 */


void FUN_021d88fc(long *param_1)

{
  undefined4 uVar1;
  size_t __n;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long **pplStack_38;
  
  local_50 = param_1;
  puVar2 = (undefined8 *)FUN_00c4e600();
  if (puVar2[600] != 0) {
    local_48 = puVar2 + puVar2[600] * 3;
    pplStack_38 = &local_50;
    local_40 = puVar2;
    FUN_026f6d70(&local_58,&local_40,&local_48,&pplStack_38);
    puVar4 = puVar2;
    if (puVar2[600] != 0) {
      puVar4 = puVar2 + puVar2[600] * 3;
    }
    if (puVar4 != local_58) {
      puVar4 = local_58;
      do {
        puVar5 = puVar4 + 3;
        (**(code **)(*(long *)*puVar4 + 0xd0))();
        puVar6 = puVar2;
        if (puVar2[600] != 0) {
          puVar6 = puVar2 + puVar2[600] * 3;
        }
        puVar4 = puVar5;
      } while (puVar5 != puVar6);
      uVar1 = *(undefined4 *)(puVar2 + 0x259);
      *(undefined4 *)(puVar2 + 0x259) = 0;
      (**(code **)(*local_50 + 0x100))(local_50,local_58,puVar5);
      lVar3 = puVar2[600];
      *(undefined4 *)(puVar2 + 0x259) = uVar1;
      puVar6 = puVar2 + lVar3 * 3;
      puVar4 = puVar2;
      if (lVar3 != 0) {
        puVar4 = puVar6;
      }
      if (puVar4 != local_58) {
        __n = (long)puVar6 - (long)puVar4;
        if (__n != 0) {
          memmove(local_58,puVar4,__n);
          lVar3 = puVar2[600];
          local_58 = (undefined8 *)((long)local_58 + __n);
        }
        puVar2[600] = lVar3 + ((long)puVar6 - (long)local_58 >> 3) * 0x5555555555555555;
      }
    }
  }
  return;
}



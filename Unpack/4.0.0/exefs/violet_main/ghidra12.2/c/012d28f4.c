/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d28f4; name: FUN_012d28f4
 */


void FUN_012d28f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *__dest;
  undefined1 auStack_80 [64];
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  __dest = *(void **)(param_1 + 0x30);
  pvVar2 = *(void **)(param_1 + 0x38);
  local_30 = param_2;
  if (__dest == pvVar2) {
LAB_012d2918:
    if (__dest != pvVar2) {
      FUN_012d2bec(auStack_80);
      memcpy(__dest,auStack_80,0x40);
      local_28 = *(undefined8 *)((long)__dest + 0x40);
      *(undefined8 *)((long)__dest + 0x40) = 0;
      FUN_012d3dcc(&local_28);
      uVar1 = local_40;
      local_40 = 0;
      *(undefined8 *)((long)__dest + 0x40) = uVar1;
      *(undefined1 *)((long)__dest + 0x48) = local_38;
      FUN_012d3d80(auStack_80);
      FUN_012d3dcc(&local_40);
      return;
    }
  }
  else {
    do {
      if (*(long *)((long)__dest + 0x40) == 0) goto LAB_012d2918;
      __dest = (void *)((long)__dest + 0x50);
    } while (pvVar2 != __dest);
  }
  FUN_012d29ac((long *)(param_1 + 0x30),&local_30);
  return;
}



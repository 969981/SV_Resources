/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034388a4; name: FUN_034388a4
 */


undefined8 * FUN_034388a4(char *param_1,void *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __n;
  char *__dest;
  size_t sVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,0x38);
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = *(byte *)((long)puVar3 + 0x34);
    *(byte *)((long)puVar3 + 0x34) = bVar1 | 1;
    *(undefined4 *)(puVar3 + 6) = param_3;
    if (param_2 == (void *)0x0) {
      *(byte *)((long)puVar3 + 0x34) = bVar1 & 0xfd | 1;
    }
    else {
      *(byte *)((long)puVar3 + 0x34) = bVar1 | 3;
      memcpy(puVar3 + 1,param_2,0x24);
    }
    __n = strlen(param_1);
    __dest = (char *)(**(code **)(puVar2 + 0x10))(7,__n + 1);
    *puVar3 = __dest;
    if (__dest == (char *)0x0) {
      (**(code **)(puVar2 + 0x30))(7,puVar3);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      sVar4 = strlen(param_1);
      if (sVar4 + 1 <= __n) {
        __n = sVar4 + 1;
      }
      strncpy(__dest,param_1,__n);
      __dest[__n] = '\0';
    }
  }
  return puVar3;
}



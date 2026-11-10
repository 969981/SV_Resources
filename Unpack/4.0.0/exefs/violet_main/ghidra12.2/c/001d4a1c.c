/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d4a1c; name: FUN_001d4a1c
 */


undefined4 FUN_001d4a1c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 local_f0 [128];
  
  puVar3 = (undefined8 *)*param_1;
  __s = (char *)FUN_001ce584(param_2,local_f0 + 0x80);
  if (__s == (char *)0x0) {
    FUN_001ec308(*puVar3);
    FUN_001ec308(puVar3);
    *param_1 = 0;
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_001d4af0(param_1,__s,sVar2);
    FUN_001ec308(__s);
  }
  return uVar1;
}



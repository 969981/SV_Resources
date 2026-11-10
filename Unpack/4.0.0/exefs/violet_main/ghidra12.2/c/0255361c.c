/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255361c; name: FUN_0255361c
 */


uint FUN_0255361c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = &LAB_0255d724;
  if (DAT_04850ae8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_0255d930(param_2);
  local_30 = *puVar3;
  local_28 = *(undefined4 *)(puVar3 + 1);
  uStack_24 = *(undefined4 *)((long)puVar3 + 0xc);
  uVar2 = FUN_0255d9bc(param_1,puVar1,0,&local_30);
  return uVar2 & 1;
}



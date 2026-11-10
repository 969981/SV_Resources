/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aed9cc; name: FUN_01aed9cc
 */


uint FUN_01aed9cc(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long local_18;
  
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    local_18 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10);
      local_18 = 0;
      if (lVar4 != 0) {
        local_18 = lVar4 + -0x28;
      }
    }
  }
  else if ((cVar2 == '\0') || (cVar2 == '\x01')) {
    local_18 = *(long *)(param_2 + 8);
  }
  else {
    local_18 = 0;
  }
  puVar1 = PTR_LAB_047d3b28;
  if (DAT_04802178 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_01aeea30(param_1,puVar1,0,&local_18);
  return uVar3 & 1;
}



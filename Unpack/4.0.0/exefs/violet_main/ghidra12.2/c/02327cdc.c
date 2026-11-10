/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02327cdc; name: FUN_02327cdc
 */


uint FUN_02327cdc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  memset(&local_b0,0,0x80);
  uVar2 = FUN_01a3bffc(param_1,param_2,param_3 & 1,&local_b0,0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return uVar2 & 1;
}



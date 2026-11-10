/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226e188; name: FUN_0226e188
 */


void FUN_0226e188(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar1 = param_1 + 0xc0;
  local_24 = 6;
  puVar2 = (undefined8 *)FUN_00d2ae18(lVar1,&local_24);
  *puVar2 = *(undefined8 *)(param_1 + 0x490);
  local_28 = 7;
  puVar2 = (undefined8 *)FUN_00d2ae18(lVar1,&local_28);
  *puVar2 = *(undefined8 *)(param_1 + 0x488);
  local_2c = 8;
  puVar2 = (undefined8 *)FUN_00d2ae18(lVar1,&local_2c);
  *puVar2 = *(undefined8 *)(param_1 + 0x498);
  return;
}



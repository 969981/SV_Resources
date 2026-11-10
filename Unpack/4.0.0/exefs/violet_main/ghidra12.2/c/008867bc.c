/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008867bc; name: FUN_008867bc
 */


void FUN_008867bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  FUN_008874fc();
  puVar1 = PTR_DAT_047d1f40 + 0x10;
  puVar2 = PTR_DAT_047d1f48 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar1;
  plVar3 = param_1 + 5;
  *plVar3 = (long)puVar2;
  param_1[9] = -1;
  FUN_008874d4(plVar3,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  *plVar3 = (long)(PTR_DAT_047d1f50 + 0x10);
  param_1[10] = 0;
  FUN_008874d4(plVar3,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
                    /* WARNING: Could not recover jumptable at 0x00886898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1,1,1);
  return;
}



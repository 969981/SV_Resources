/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250d454; name: FUN_0250d454
 */


void FUN_0250d454(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = (float)param_1;
  fStack_18 = (float)param_2;
  local_1c = (float)param_3;
  local_20 = (float)param_4;
  puVar1 = &LAB_02b9e104;
  if (DAT_0484f240 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02517914(param_5,puVar1,0,&local_14,&fStack_18,&local_1c,&local_20);
  return;
}



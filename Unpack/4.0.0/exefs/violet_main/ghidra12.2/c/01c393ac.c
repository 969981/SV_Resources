/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c393ac; name: FUN_01c393ac
 */


void FUN_01c393ac(void *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_848 [2072];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    memset(auStack_848,0,0x814);
    FUN_01674c60(lVar1,auStack_848);
    memcpy(param_1,auStack_848,0x814);
  }
  return;
}



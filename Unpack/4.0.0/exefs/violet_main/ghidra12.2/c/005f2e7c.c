/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2e7c; name: FUN_005f2e7c
 */


void FUN_005f2e7c(undefined8 param_1)

{
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  
                    /* try { // try from 005f2e88 to 005f2e8f has its CatchHandler @ 005f2f08 */
  FUN_005f1784(&local_80);
                    /* try { // try from 005f2e90 to 005f2e9b has its CatchHandler @ 005f2f04 */
  FUN_005f1784(param_1,&local_80);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_68 + 0x18))
            (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  return;
}



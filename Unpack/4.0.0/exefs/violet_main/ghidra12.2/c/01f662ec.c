/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f662ec; name: FUN_01f662ec
 */


void FUN_01f662ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [16];
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_027b7390(auStack_70);
    FUN_027b818c(param_1,param_2,auStack_70);
    if ((local_40 & 1) != 0) {
      (**(code **)(*plStack_28 + 0x18))
                (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
    }
    if ((local_60 & 1) != 0) {
      (**(code **)(*plStack_48 + 0x18))
                (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
    }
    FUN_01e73724(auStack_70);
  }
  return;
}



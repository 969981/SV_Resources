/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de344; name: FUN_027de344
 */


void FUN_027de344(undefined1 *param_1,long param_2)

{
  long lVar1;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  lVar1 = *(long *)(param_2 + 0x78);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    if ((*(byte *)(lVar1 + 0x40) & 1) == 0) {
      lVar1 = lVar1 + 0x41;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x50);
    }
    FUN_027de3d4(&local_40,lVar1);
    *param_1 = 0;
    FUN_01cfa5b0(param_1 + 8,&local_40);
    *param_1 = 1;
    if ((local_40 & 1) != 0) {
      (**(code **)(*plStack_28 + 0x18))
                (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999834; name: FUN_02999834
 */


bool FUN_02999834(undefined8 param_1,int *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = FUN_017da764();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
      uVar3 = 0;
    }
    else {
      uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = *(uint *)((long)param_2 + uVar2);
      }
    }
    bVar1 = (uVar3 & 0xff) == (param_4 & 0xff);
  }
  return bVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298a69c; name: FUN_0298a69c
 */


bool FUN_0298a69c(int param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0x259) {
    if (param_2 < 0x1c3) {
      if (param_2 < 0x12d) {
        if (param_2 < 0x97) {
          if (param_2 < 0x1f) {
            return false;
          }
          iVar2 = 0x800;
        }
        else {
          iVar2 = 0x1000;
        }
      }
      else {
        iVar2 = 0x1800;
      }
    }
    else {
      iVar2 = 0x2000;
    }
  }
  else {
    iVar2 = 0x2800;
  }
  if (0xfefff < param_1) {
    param_1 = 0xff000;
  }
  iVar1 = FUN_012440f0(param_4,0x100);
  return iVar1 < (int)((ulong)(uint)(iVar2 << (param_3 & 1)) * (long)param_1 + 0x800 >> 0xc) / 6 >>
                 0xc;
}



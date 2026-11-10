/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e2197c; name: FUN_02e2197c
 */


undefined4 FUN_02e2197c(int param_1,byte param_2,byte param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 2) {
    if (10 < param_3) {
      return 5;
    }
    if (param_2 == 0) {
      if ((byte)(param_3 - 1) < 3) {
        return 5;
      }
    }
    else if (param_2 == 1) {
      if ((param_3 & 0xfe) == 2) {
        return 5;
      }
    }
    else if ((param_2 == 2) && (param_3 == 3)) {
      return 5;
    }
    puVar2 = (undefined4 *)&DAT_03d6a424;
  }
  else if (param_1 == 0) {
    if (10 < param_3) {
      return 5;
    }
    puVar2 = (undefined4 *)&DAT_03d6a348;
  }
  else {
    if (param_1 != 1) {
      return 5;
    }
    if (10 < param_3) {
      return 5;
    }
    uVar1 = (uint)param_2;
    if (uVar1 == 5) {
      puVar2 = (undefined4 *)&DAT_03d6a3f8;
    }
    else if (uVar1 - 1 < 3) {
      puVar2 = &DAT_03d6a3a0;
    }
    else if (uVar1 == 4) {
      puVar2 = (undefined4 *)&DAT_03d6a3cc;
    }
    else {
      puVar2 = &DAT_03d6a374;
    }
  }
  return puVar2[param_3];
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9c750; name: FUN_00d9c750
 */


undefined1 FUN_00d9c750(int param_1,char param_2,uint param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_1 != 2) {
    if (param_1 == 0) {
      if (1 < (param_3 & 0xff)) {
        return 2;
      }
      uVar1 = (ulong)*(uint *)(&DAT_03d6a348 + ((ulong)param_3 & 0xff) * 4);
      puVar4 = &DAT_03d6a450;
    }
    else {
      if (param_1 != 1) {
        return 2;
      }
      if (10 < (param_3 & 0xff)) {
        return 2;
      }
      if ((byte)(param_2 - 1U) < 5) {
        puVar2 = (undefined4 *)(&PTR_DAT_045fccb8)[(char)(param_2 - 1U)];
      }
      else {
        puVar2 = &DAT_03d6a374;
      }
      uVar1 = (ulong)(uint)puVar2[(ulong)param_3 & 0xff];
      if (4 < (int)puVar2[(ulong)param_3 & 0xff]) {
        return 2;
      }
      puVar4 = &DAT_03d6a455;
    }
    goto LAB_00d9c7a0;
  }
  if (10 < (param_3 & 0xff)) {
    return 2;
  }
  if (param_2 == '\0') {
    if ((param_3 & 0xff) < 0xb) {
      uVar3 = 0x40e;
LAB_00d9c824:
      if ((1 << (ulong)(param_3 & 0x1f) & uVar3) != 0) {
        return 2;
      }
    }
  }
  else if (param_2 == '\x01') {
    if ((param_3 & 0xff) < 0xb) {
      uVar3 = 0x40c;
      goto LAB_00d9c824;
    }
  }
  else if (param_2 == '\x02') {
    if ((param_3 & 0xff) == 3) {
      return 2;
    }
    if ((param_3 & 0xff) == 10) {
      return 2;
    }
  }
  else if ((param_3 & 0xff) == 10) {
    return 2;
  }
  uVar1 = (ulong)*(uint *)(&DAT_03d6a424 + ((ulong)param_3 & 0xff) * 4);
  puVar4 = &DAT_03d6a45a;
LAB_00d9c7a0:
  return puVar4[uVar1];
}



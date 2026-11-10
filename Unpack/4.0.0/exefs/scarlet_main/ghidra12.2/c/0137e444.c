/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137e444; name: FUN_0137e444
 */


bool FUN_0137e444(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  uVar1 = (uint)*(byte *)(*(long *)(param_1 + 8) + 0x370);
  if (iVar2 == 2) {
    if (param_2 < 0xb) {
      if (uVar1 == 0) {
        if (2 < (byte)(param_2 - 1)) goto LAB_0137e478;
      }
      else if (uVar1 == 1) {
        if ((param_2 & 0xfe) != 2) goto LAB_0137e478;
      }
      else if ((uVar1 != 2) || (param_2 != 3)) {
LAB_0137e478:
        puVar3 = (undefined4 *)&DAT_03d6a424;
        goto LAB_0137e480;
      }
    }
  }
  else if (iVar2 == 0) {
    if (param_2 < 0xb) {
      puVar3 = (undefined4 *)&DAT_03d6a348;
LAB_0137e480:
      iVar2 = puVar3[param_2];
      goto LAB_0137e488;
    }
  }
  else if ((iVar2 == 1) && (param_2 < 0xb)) {
    if (uVar1 == 5) {
      puVar3 = (undefined4 *)&DAT_03d6a3f8;
    }
    else if (uVar1 - 1 < 3) {
      puVar3 = &DAT_03d6a3a0;
    }
    else if (uVar1 == 4) {
      puVar3 = (undefined4 *)&DAT_03d6a3cc;
    }
    else {
      puVar3 = &DAT_03d6a374;
    }
    goto LAB_0137e480;
  }
  iVar2 = 5;
LAB_0137e488:
  return iVar2 != 5;
}



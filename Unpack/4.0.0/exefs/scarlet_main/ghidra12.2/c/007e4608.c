/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e4608; name: FUN_007e4608
 */


void FUN_007e4608(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    local_40[0] = 0x10408;
    goto LAB_007e46dc;
  }
  lVar4 = *(long *)(lVar1 + 0x18);
  if (lVar4 == 0) {
    local_40[0] = 0xc10;
    goto LAB_007e46dc;
  }
  lVar2 = *(long *)(lVar4 + 0x38);
  *(long *)(lVar1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
  }
  lVar3 = *(long *)(lVar4 + 0x40);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x38) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x40) = lVar3;
  }
  lVar2 = *(long *)(lVar1 + 0x10);
  if (*(long *)(lVar1 + 8) == 0) {
    if (lVar2 == 0) {
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(long *)(lVar1 + 8) = lVar4;
      goto LAB_007e4698;
    }
  }
  else if (lVar2 != 0) {
    *(long *)(lVar2 + 0x28) = lVar4;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(long *)(lVar4 + 0x30) = lVar2;
LAB_007e4698:
    *(long *)(lVar1 + 0x10) = lVar4;
  }
  FUN_0284e39c(lVar4);
  *(undefined8 *)(lVar4 + 0x20) = *param_4;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *param_2 = lVar4;
    param_2[1] = lVar4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
  }
  else {
    do {
      lVar1 = *(long *)(lVar1 + 0x48);
    } while (lVar1 != 0);
    lVar1 = param_2[1];
    *(long *)(lVar1 + 0x48) = lVar4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(long *)(lVar4 + 0x50) = lVar1;
    param_2[1] = lVar4;
  }
  local_40[0] = 0;
LAB_007e46dc:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}



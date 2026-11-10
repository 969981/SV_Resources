/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e4b14; name: FUN_007e4b14
 */


void FUN_007e4b14(undefined8 param_1,long *param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    local_28[0] = 0x10408;
    goto LAB_007e4bd8;
  }
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (puVar1 == (undefined1 *)0x0) {
    local_28[0] = 0xc10;
    goto LAB_007e4bd8;
  }
  lVar3 = *(long *)(puVar1 + 0x20);
  *(long *)(lVar2 + 0x18) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  lVar4 = *(long *)(puVar1 + 0x28);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x20) = lVar3;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x28) = lVar4;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  if (*(long *)(lVar2 + 8) == 0) {
    if (lVar3 == 0) {
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined1 **)(lVar2 + 8) = puVar1;
      goto LAB_007e4b94;
    }
  }
  else if (lVar3 != 0) {
    *(undefined1 **)(lVar3 + 0x10) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(long *)(puVar1 + 0x18) = lVar3;
LAB_007e4b94:
    *(undefined1 **)(lVar2 + 0x10) = puVar1;
  }
  *puVar1 = *param_3;
  *(undefined8 *)(puVar1 + 8) = *param_4;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_2 = (long)puVar1;
    param_2[1] = (long)puVar1;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
  }
  else {
    do {
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    lVar2 = param_2[1];
    *(undefined1 **)(lVar2 + 0x30) = puVar1;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(long *)(puVar1 + 0x38) = lVar2;
    param_2[1] = (long)puVar1;
  }
  local_28[0] = 0;
LAB_007e4bd8:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}



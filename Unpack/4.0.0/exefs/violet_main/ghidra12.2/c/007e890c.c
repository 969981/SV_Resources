/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e890c; name: FUN_007e890c
 */


void FUN_007e890c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(0x9750,uVar3);
  if (lVar4 == 0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      lVar5 = lVar5 + 0x18;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    } while (lVar5 != 0x9750);
    *(long *)(param_2 + 0x20) = lVar4;
    uVar3 = FUN_0078a12c();
    lVar4 = FUN_007bf9f0(0x2000,uVar3);
    if (lVar4 != 0) {
      lVar5 = 0xc;
      do {
        lVar2 = lVar4 + lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
      } while (lVar5 != 0x200c);
      *(long *)(param_2 + 0x28) = lVar4;
      local_30[0] = 0;
      goto LAB_007e89b8;
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  local_30[0] = 0x10401;
LAB_007e89b8:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}



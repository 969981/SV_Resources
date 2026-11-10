/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e4860; name: FUN_007e4860
 */


void FUN_007e4860(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  lVar4 = *param_2;
  do {
    if (lVar4 == 0) {
      local_40[0] = 0x2c0a;
LAB_007e4970:
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      FUN_00cbd7c0(param_1,local_40);
      return;
    }
    uVar2 = FUN_0078b278(lVar4,param_3);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == *param_2) {
        if (lVar4 != param_2[1]) {
          *param_2 = *(long *)(lVar4 + 0x48);
          goto LAB_007e48e0;
        }
        *param_2 = 0;
        param_2[1] = 0;
        lVar1 = *(long *)(lVar4 + 0x48);
        lVar3 = *(long *)(lVar4 + 0x50);
      }
      else if (lVar4 == param_2[1]) {
        param_2[1] = *(long *)(lVar4 + 0x50);
        lVar1 = *(long *)(lVar4 + 0x48);
        lVar3 = *(long *)(lVar4 + 0x50);
      }
      else {
LAB_007e48e0:
        lVar1 = *(long *)(lVar4 + 0x48);
        lVar3 = *(long *)(lVar4 + 0x50);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x48) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x50) = lVar3;
      }
      lVar3 = param_2[2];
      lVar1 = *(long *)(lVar3 + 0x20);
      if (*(long *)(lVar3 + 0x18) == 0) {
        if (lVar1 == 0) {
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(long *)(lVar3 + 0x18) = lVar4;
          goto LAB_007e491c;
        }
      }
      else if (lVar1 != 0) {
        *(long *)(lVar1 + 0x38) = lVar4;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(long *)(lVar4 + 0x40) = lVar1;
LAB_007e491c:
        *(long *)(lVar3 + 0x20) = lVar4;
      }
      if (*(long *)(lVar3 + 8) == lVar4) {
        if (*(long *)(lVar3 + 0x10) != lVar4) {
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar4 + 0x28);
          goto LAB_007e4958;
        }
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        lVar1 = *(long *)(lVar4 + 0x28);
        lVar4 = *(long *)(lVar4 + 0x30);
      }
      else if (*(long *)(lVar3 + 0x10) == lVar4) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar4 + 0x30);
        lVar1 = *(long *)(lVar4 + 0x28);
        lVar4 = *(long *)(lVar4 + 0x30);
      }
      else {
LAB_007e4958:
        lVar1 = *(long *)(lVar4 + 0x28);
        lVar4 = *(long *)(lVar4 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x28) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = lVar4;
      }
      local_40[0] = 0;
      goto LAB_007e4970;
    }
    lVar4 = *(long *)(lVar4 + 0x48);
  } while( true );
}



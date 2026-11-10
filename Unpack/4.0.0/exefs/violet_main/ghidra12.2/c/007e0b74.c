/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e0b74; name: FUN_007e0b74
 */


void FUN_007e0b74(undefined8 param_1,long param_2,char param_3,long *param_4,undefined4 *param_5,
                 long *param_6,undefined4 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_78 [8];
  undefined4 local_58 [2];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(lVar1 + 0x18) != lVar1 + 0x10) {
    lVar2 = (long)*(int *)(lVar1 + 0x24);
    lVar3 = *(long *)(lVar1 + 0x18) - lVar2;
    do {
      lVar4 = *(long *)(lVar3 + 0x10);
      if (*(char *)(lVar4 + 0x28) == param_3) {
        if (lVar3 != 0) {
          FUN_00796868(local_78,lVar4 + 8);
          FUN_007968fc(param_2 + 0x30,local_78);
          FUN_0284e3d4(local_78);
          *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar4 + 0x28);
          *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar4 + 0x30);
          *(short *)(param_2 + 0x52) = (short)*(undefined4 *)(lVar3 + 0x18);
          if ((*(int *)(*(long *)(*(long *)(param_2 + 0x10) + (ulong)*(byte *)(param_2 + 4) * 8) +
                       (ulong)*(byte *)(lVar3 + 0x1c) * 4) != 1) ||
             (*(int *)(*(long *)(*(long *)(param_2 + 0x10) + (ulong)*(byte *)(lVar3 + 0x1c) * 8) +
                      (ulong)*(byte *)(param_2 + 4) * 4) != 1)) {
            param_5 = param_7;
            param_4 = param_6;
          }
          *param_4 = param_2 + 0x30;
          *param_5 = 1;
          local_78[0] = 0;
          goto LAB_007e0c90;
        }
        break;
      }
      lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    } while (lVar3 != (lVar1 + 0x10) - lVar2);
  }
  local_78[0] = 0x2c0a;
LAB_007e0c90:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
  FUN_00cbd7c0(param_1,local_78);
  return;
}



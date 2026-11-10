/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c41540; name: FUN_00c41540
 */


void FUN_00c41540(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(uint *)(param_1 + 0x30) ^ (int)*(uint *)(param_1 + 0x30) >> 0x1f;
  if (uVar1 == 1) {
    lVar3 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    if (((lVar3 != lVar2) && (*(undefined1 *)(lVar3 + 0x10) = 1, lVar3 + 0x18 != lVar2)) &&
       (*(undefined1 *)(lVar3 + 0x28) = 1, lVar3 + 0x30 != lVar2)) {
      *(undefined1 *)(lVar3 + 0x40) = 1;
      for (lVar3 = lVar3 + 0x48; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
        *(undefined1 *)(lVar3 + 0x10) = 1;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0:
      break;
    default:
      auVar4 = FUN_0270c170();
      if ((*auVar4._8_8_ != 0) && (lVar3 = FUN_00c41638(), lVar3 != 0)) {
        lVar3 = FUN_00c41638(*auVar4._8_8_);
        *(undefined1 *)(lVar3 + 0xb) = *(undefined1 *)*auVar4._0_8_;
      }
      return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      param_1 = FUN_0270c160();
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



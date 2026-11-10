/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a41fb4; name: FUN_01a41fb4
 */


void FUN_01a41fb4(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_90 [64];
  uint local_34;
  
  uVar5 = *(ushort *)(param_2 + 2);
  if (uVar5 == 0xffff) {
    uVar5 = FUN_01679490(*(undefined8 *)(param_1 + 8));
  }
  *(ushort *)(param_2 + 4) = uVar5;
  if (param_2[0xd] == '\0') {
    uVar1 = (uint)uVar5;
    if (uVar1 != 0xffff) {
      uVar5 = *(ushort *)(param_3 + 10);
      if (uVar5 != 0xffff) {
        lVar7 = *(long *)(param_1 + 8);
        uVar2 = *(undefined4 *)(lVar7 + 0x6c);
        *(uint *)(lVar7 + 0x6c) = uVar1;
        uVar3 = uVar1;
        while( true ) {
          if ((uVar5 <= uVar3) && (uVar3 != *(uint *)(lVar7 + 0x68))) {
            uVar6 = 0;
            goto LAB_01a42070;
          }
          local_34 = 0xffffffff;
          sVar4 = FUN_00f515ec(lVar7,auStack_90,0x10,&local_34);
          if ((((ushort)(sVar4 - 0x88U) < 0x46) && (uVar1 <= local_34)) && (local_34 < uVar5))
          break;
          uVar3 = *(uint *)(lVar7 + 0x6c);
        }
        uVar6 = 1;
LAB_01a42070:
        *(undefined4 *)(lVar7 + 0x6c) = uVar2;
        goto LAB_01a42074;
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
LAB_01a42074:
  if (*(short *)(param_2 + 2) == -1) {
    FUN_01a42118(*(long *)(param_1 + 0x10),*(undefined4 *)(param_2 + 8),*(undefined2 *)(param_2 + 6)
                 ,param_2[0xc],uVar6);
  }
  else {
    FUN_01679624(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),*(short *)(param_2 + 2),0xc9,
                 *(undefined4 *)(param_2 + 8),0);
  }
  *param_2 = 1;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250e28; name: FUN_01250e28
 */


void FUN_01250e28(undefined8 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_01582534();
  FUN_012409b4();
  uVar3 = FUN_01250ed0();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_01243584(param_1);
    FUN_0166616c(uVar4,2,param_2);
    uVar4 = FUN_01243584(param_1);
    FUN_0124dc24(uVar4,2,param_2);
    if (param_2 == 0) {
      FUN_0124e480(param_1);
      iVar2 = FUN_0136b004();
      if (iVar2 != 0) {
        FUN_01582534(param_1);
        lVar5 = FUN_012409b4();
        if (*(short *)(lVar5 + 0x26) != 0) {
          FUN_01582534(param_1);
          lVar5 = FUN_012409b4();
          uVar1 = *(ushort *)(lVar5 + 0x26);
          uVar4 = FUN_01243584(param_1);
          FUN_0297f844(uVar4,-(uint)uVar1);
          return;
        }
      }
    }
  }
  return;
}



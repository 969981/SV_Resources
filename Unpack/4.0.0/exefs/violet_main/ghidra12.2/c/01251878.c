/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01251878; name: FUN_01251878
 */


void FUN_01251878(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  short *psVar4;
  
  FUN_01582534();
  uVar1 = FUN_012409b4();
  uVar2 = FUN_01251988(uVar1,param_2);
  if ((param_2 < 6) && ((uVar2 & 1) != 0)) {
    FUN_01582534(param_1);
    lVar3 = FUN_012409b4();
    psVar4 = (short *)(lVar3 + (long)param_2 * 8 + 0x30);
    if ((*psVar4 != 0) && (lVar3 = lVar3 + (long)param_2 * 8, *(short *)(lVar3 + 0x32) != 0)) {
      uVar1 = FUN_01243584(param_1);
      FUN_0166616c(uVar1,4,param_2);
      uVar1 = FUN_01243584(param_1);
      FUN_0124dc24(uVar1,4,*psVar4);
      switch(*psVar4) {
      case 1:
        FUN_01920d90(param_1);
        return;
      case 2:
        FUN_02986524(param_1);
        return;
      case 3:
        FUN_029865cc(param_1,*(undefined2 *)(lVar3 + 0x36));
        return;
      case 4:
        FUN_029866d0(param_1);
        return;
      }
    }
  }
  return;
}



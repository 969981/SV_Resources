/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048a100; name: FUN_0048a100
 */


undefined8 FUN_0048a100(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_0047e3b0(*(undefined8 *)(param_1 + 0x30),PTR_FUN_047cd538);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar3 = FUN_0047dcc0();
      *(long *)(param_1 + 0x30) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = FUN_0047e430(param_2);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          FUN_0047e450(param_2,iVar1);
          lVar3 = FUN_0045d030();
          if (lVar3 == 0) {
            return 0;
          }
          iVar2 = FUN_0047e2f0(*(undefined8 *)(param_1 + 0x30),lVar3);
          if (iVar2 == 0) {
            FUN_003dffa0(lVar3);
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(param_2);
        } while (iVar1 < iVar2);
      }
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f51e4; name: FUN_001f51e4
 */


undefined8 FUN_001f51e4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x10);
  lVar8 = 0;
  lVar9 = 0;
  param_3 = param_2 + param_3;
  lVar6 = param_2;
  while( true ) {
    if (param_3 == lVar6) {
      if (lVar8 == 0) {
        uVar4 = 0;
        *plVar7 = 0;
        plVar7[1] = 0;
      }
      else {
        puVar2 = (undefined8 *)FUN_001f45a0(param_4,lVar9 + lVar8 * 0x10);
        if (puVar2 == (undefined8 *)0x0) {
          uVar4 = 0xfffffc7b;
        }
        else {
          puVar5 = puVar2 + lVar8 * 2;
          *plVar7 = lVar8;
          plVar7[1] = (long)puVar2;
          while (param_3 != param_2) {
            uVar1 = FUN_001ed564(param_2);
            param_2 = param_2 + 2;
            if (uVar1 != 0) {
              *puVar2 = puVar5;
              puVar2[1] = (ulong)uVar1;
              puVar3 = (undefined1 *)FUN_001ed9b4(puVar5,param_2);
              param_2 = param_2 + (ulong)uVar1;
              puVar5 = (undefined8 *)(puVar3 + 1);
              *puVar3 = 0;
              puVar2 = puVar2 + 2;
            }
          }
          uVar4 = 0;
        }
      }
      return uVar4;
    }
    if (param_3 - lVar6 < 2) break;
    uVar1 = FUN_001ed564(lVar6);
    lVar6 = lVar6 + 2;
    if (uVar1 != 0) {
      if ((ulong)(param_3 - lVar6) < (ulong)uVar1) {
        return 0xfffffdf6;
      }
      lVar6 = lVar6 + (ulong)uVar1;
      lVar9 = lVar9 + (ulong)uVar1 + 1;
      lVar8 = lVar8 + 1;
    }
  }
  return 0xfffffdf6;
}



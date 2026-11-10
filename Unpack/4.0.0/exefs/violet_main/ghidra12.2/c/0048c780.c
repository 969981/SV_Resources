/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048c780; name: FUN_0048c780
 */


undefined8 FUN_0048c780(int param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 == 5) {
    lVar2 = *param_2;
    puVar3 = (undefined8 *)(lVar2 + 0x10);
    FUN_0043e1f0(*puVar3);
    *puVar3 = 0;
    FUN_00481590();
    iVar1 = FUN_0048c5d0(puVar3,lVar2);
    if (iVar1 == -1) {
      return 0;
    }
    FUN_004815e0();
  }
  else if (param_1 == 3) {
    FUN_0043e1f0(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  return 1;
}



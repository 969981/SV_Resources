/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fcd90; name: FUN_002fcd90
 */


undefined8 FUN_002fcd90(long param_1,ulong param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_2 & 1) == 0) {
    uVar3 = FUN_002fce90(param_1,0);
    return uVar3;
  }
  cVar1 = *(char *)(param_1 + 0xb0);
  FUN_0038dcd0(&DAT_047ef2c0,&LAB_002fc130);
  plVar2 = &DAT_047ef2d0;
  if (cVar1 != '\0') {
    plVar2 = &DAT_047ef2c8;
  }
  lVar5 = *plVar2;
  FUN_0038db40(lVar5);
  if (*(long *)(lVar5 + 0x38) == *(long *)(lVar5 + 0x40)) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    plVar2[1] = lVar5 + 0x20;
    plVar2[2] = param_1;
    *plVar2 = 0;
    lVar4 = *(long *)(lVar5 + 0x20);
    *plVar2 = lVar4;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)(lVar5 + 0x20) = plVar2;
    *(long *)(lVar5 + 0x30) = *(long *)(lVar5 + 0x30) + 1;
                    /* try { // try from 002fce20 to 002fce27 has its CatchHandler @ 002fce80 */
    FUN_0038db60(lVar5);
    return 0;
  }
  *(long *)(lVar5 + 0x38) = *(long *)(lVar5 + 0x38) + 1;
                    /* try { // try from 002fce54 to 002fce5b has its CatchHandler @ 002fce7c */
  FUN_0038db60(lVar5);
  FUN_002fce90(param_1,1);
  return 0;
}



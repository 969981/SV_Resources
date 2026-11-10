/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002912f0; name: FUN_002912f0
 */


void FUN_002912f0(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 local_a0;
  long local_98 [4];
  byte *local_78;
  byte *local_70;
  char *local_58;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  puVar2 = PTR_LAB_047cba48;
  puVar6 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar6 = (ulong *)param_2[1];
  }
  uVar5 = *param_2 >> 1;
  if (uVar5 != 0) {
    puVar9 = puVar6 + uVar5 * 0x12;
    do {
                    /* try { // try from 00291380 to 00291387 has its CatchHandler @ 002914f4 */
      piVar3 = (int *)FUN_00343a90(puVar6[0x11],"grpc.internal.address.hierarchical_path");
      if ((((piVar3 != (int *)0x0) && (*piVar3 == 2)) &&
          (plVar10 = *(long **)(piVar3 + 4), plVar10 != (long *)0x0)) &&
         (lVar1 = *plVar10, lVar1 != plVar10[1])) {
                    /* try { // try from 002913b0 to 002913c7 has its CatchHandler @ 00291490 */
        local_98[0] = lVar1;
        lVar4 = FUN_0027af8c(param_1,lVar1,&DAT_03cc97a6,local_98,&local_78);
                    /* try { // try from 002913d4 to 002913db has its CatchHandler @ 0029148c */
        FUN_0029150c(&local_78,lVar1 + 0x18,plVar10[1]);
        local_58 = "grpc.internal.address.hierarchical_path";
                    /* try { // try from 002913e0 to 002913f3 has its CatchHandler @ 00291488 */
        FUN_00344250(local_98,"grpc.internal.address.hierarchical_path",&local_78,&PTR_LAB_0448d698)
        ;
                    /* try { // try from 002913f8 to 0029141f has its CatchHandler @ 00291494 */
        local_a0 = FUN_003435b0(puVar6[0x11],&local_58,1,local_98,1);
        FUN_0028f77c(lVar4 + 0x38,puVar6,&local_a0);
        pbVar7 = local_78;
        if (local_78 != (byte *)0x0) {
          if (local_70 != local_78) {
            do {
              pbVar8 = local_70 + -0x18;
              if ((*pbVar8 & 1) != 0) {
                FUN_0049e790(puVar2,*(undefined8 *)(local_70 + -8));
              }
              local_70 = pbVar8;
            } while (pbVar7 != pbVar8);
          }
          local_70 = pbVar7;
          FUN_0049e790(puVar2,local_78);
        }
      }
      puVar6 = puVar6 + 0x12;
    } while (puVar6 != puVar9);
  }
  return;
}



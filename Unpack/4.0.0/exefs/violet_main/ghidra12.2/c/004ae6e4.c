/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ae6e4; name: FUN_004ae6e4
 */


void FUN_004ae6e4(long *param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte local_80 [16];
  undefined8 local_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined6 uStack_60;
  byte local_58;
  byte bStack_57;
  undefined6 uStack_56;
  undefined2 local_50;
  undefined6 uStack_4e;
  undefined8 local_48;
  
  local_48 = 0;
  local_58 = 0;
  bStack_57 = 0;
  uStack_56 = 0;
  local_50 = 0;
  uStack_4e = 0;
  if (*(long *)(*param_1 + 8) == 0) {
                    /* try { // try from 004ae754 to 004ae763 has its CatchHandler @ 004ae850 */
    FUN_004a8ec0(local_80,"Import \"",
                 *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)param_3 * 8 + 8));
                    /* try { // try from 004ae764 to 004ae777 has its CatchHandler @ 004ae84c */
    pbVar3 = (byte *)FUN_0021d540(local_80,"\" has not been loaded.",0x16);
  }
  else {
                    /* try { // try from 004ae720 to 004ae72f has its CatchHandler @ 004ae890 */
    FUN_004a8ec0(local_80,"Import \"",
                 *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)param_3 * 8 + 8));
                    /* try { // try from 004ae730 to 004ae743 has its CatchHandler @ 004ae858 */
    pbVar3 = (byte *)FUN_0021d540(local_80,"\" was not found or had errors.",0x1e);
  }
  bVar1 = *pbVar3;
  bVar2 = pbVar3[1];
  uStack_60 = (undefined6)((ulong)*(undefined8 *)(pbVar3 + 8) >> 0x10);
  uStack_68 = (undefined6)*(undefined8 *)(pbVar3 + 2);
  local_62 = (undefined2)((ulong)*(undefined8 *)(pbVar3 + 2) >> 0x30);
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  uVar5 = *(undefined8 *)(pbVar3 + 0x10);
  pbVar3[0x10] = 0;
  pbVar3[0x11] = 0;
  pbVar3[0x12] = 0;
  pbVar3[0x13] = 0;
  pbVar3[0x14] = 0;
  pbVar3[0x15] = 0;
  pbVar3[0x16] = 0;
  pbVar3[0x17] = 0;
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  uStack_56 = uStack_68;
  local_50 = local_62;
  uStack_4e = uStack_60;
  local_58 = bVar1;
  bStack_57 = bVar2;
  local_48 = uVar5;
  if ((local_80[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 004ae804 to 004ae813 has its CatchHandler @ 004ae854 */
    (**(code **)(*plVar4 + 0x10))
              (plVar4,param_1 + 7,*(undefined8 *)(*(long *)(param_2 + 0x28) + (long)param_3 * 8 + 8)
               ,param_2,9,&local_58);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}



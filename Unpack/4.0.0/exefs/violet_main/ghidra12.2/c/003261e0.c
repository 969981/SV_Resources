/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003261e0; name: FUN_003261e0
 */


void FUN_003261e0(long param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_28;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (param_2 != 0) {
    if (4 < param_2) {
      param_2 = FUN_00350fb0(param_2);
    }
    FUN_00321b10(lVar8,param_2,&LAB_00326988);
    return;
  }
  local_98 = *(undefined8 **)(lVar8 + 0x168);
  *(undefined8 *)(lVar8 + 0x168) = 0;
  uStack_90 = *(undefined8 *)(lVar8 + 0x1d8);
  bVar2 = *(byte *)(lVar8 + 0x240);
  uStack_70 = *(undefined8 *)(lVar8 + 0xa8);
  local_78 = *(undefined8 *)(lVar8 + 0xa0);
  uStack_60 = *(undefined8 *)(lVar8 + 0xb8);
  local_68 = *(undefined8 *)(lVar8 + 0xb0);
  local_58 = *(undefined8 *)(lVar8 + 0xc0);
  local_48 = *(undefined8 *)(lVar8 + 0xd0);
  uStack_50 = *(undefined8 *)(lVar8 + 0xd8);
  local_28 = 0;
  uStack_40 = 0;
  if ((bVar2 & 8) != 0) {
    uStack_40 = 0x570;
  }
  uStack_80 = *(undefined8 *)(lVar8 + 0x98);
  local_88 = *(undefined8 *)(lVar8 + 0x90);
                    /* try { // try from 00326278 to 00326287 has its CatchHandler @ 003263bc */
  FUN_00339f28(&local_38,&local_98,&local_28);
  if (*(long *)(lVar8 + 0x120) != 0) {
                    /* try { // try from 00326294 to 00326297 has its CatchHandler @ 003263a4 */
    FUN_0033a390();
  }
  puVar5 = local_98;
  *(undefined8 *)(lVar8 + 0x120) = local_38;
  local_38 = 0;
  if (local_98 != (undefined8 *)0x0) {
    plVar1 = local_98 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*local_98)(local_98);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
    }
  }
  if (local_28 == 0) {
    if ((bVar2 >> 3 & 1) != 0) {
                    /* try { // try from 003262d0 to 00326347 has its CatchHandler @ 00326408 */
      puVar5 = (undefined8 *)FUN_0033a31c(*(undefined8 *)(lVar8 + 0x120));
      uVar6 = *(undefined8 *)(lVar8 + 0xd8);
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined1 *)(puVar5 + 6) = 0;
      *(undefined1 *)(puVar5 + 0x76) = 0;
      puVar5[0x7b] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = uVar6;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xc] = 0;
      puVar5[0xb] = 0;
      puVar5[0xe] = 0;
      puVar5[0xd] = 0;
      puVar5[0x10] = 0;
      puVar5[0xf] = 0;
      puVar5[0x9e] = 0;
      puVar5[0x9d] = 0;
      puVar5[0x9a] = 0;
      puVar5[0x99] = 0;
      puVar5[0x9c] = 0;
      puVar5[0x9b] = 0;
      *(undefined1 *)(puVar5 + 0xa7) = 0;
      puVar5[0xa4] = 0;
      puVar5[0xa3] = 0;
      puVar5[0xa6] = 0;
      puVar5[0xa5] = 0;
      puVar5[0xac] = 0;
      *(byte *)(puVar5 + 0xad) = *(byte *)(puVar5 + 0xad) & 0xfe;
      puVar5[0xab] = 0;
      puVar5[0xaa] = 0;
      puVar5[0xa9] = 0;
      puVar5[0xa8] = 0;
    }
    FUN_00321eb0(lVar8,param_1);
  }
  else {
                    /* try { // try from 00326390 to 0032639f has its CatchHandler @ 00326408 */
    FUN_00321b10(lVar8,local_28,&LAB_00326988);
  }
  return;
}



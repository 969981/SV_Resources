/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002aac70; name: FUN_002aac70
 */


void FUN_002aac70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  char *local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002aaca8 to 002aacb7 has its CatchHandler @ 002aadb0 */
  plVar3 = (long *)FUN_0038ad50(PTR_PTR_047cc740,lVar2);
  lVar6 = *plVar3;
                    /* try { // try from 002aacc4 to 002aad87 has its CatchHandler @ 002aadb4 */
  if ((lVar6 == 0) && (lVar6 = FUN_0038ad50(PTR_PTR_047cc6c8,lVar2), lVar6 != 0)) {
    *plVar3 = lVar6;
  }
  FUN_002a6b90(lVar2,*(undefined8 *)(param_2 + 0x10),param_2 + 0x18,param_2 + 0x30,param_3,lVar6);
  local_50 = "envoy.lrs.supports_send_all_clusters";
  uStack_48 = 0x24;
  puVar5 = *(ulong **)(lVar6 + 0x58);
  if ((puVar5 == (ulong *)0x0) || (puVar5[1] == puVar5[2])) {
    FUN_0038afc0((long *)(lVar6 + 0x58),&local_50,10,lVar2);
  }
  else {
    puVar1 = (undefined8 *)((*puVar5 & 0xfffffffffffffff8) + puVar5[1] * 0x10);
    puVar1[1] = 0x24;
    *puVar1 = "envoy.lrs.supports_send_all_clusters";
    puVar5[1] = puVar5[1] + 1;
  }
  FUN_002aadd0(*(undefined1 *)(*(long *)(param_2 + 8) + 0x10),plVar3);
  uVar4 = FUN_0038ace0(plVar3,PTR_PTR_047cc740,lVar2,&local_50);
  FUN_003676d0(param_1,uVar4,local_50);
  if (lVar2 != 0) {
                    /* try { // try from 002aad8c to 002aad93 has its CatchHandler @ 002aadac */
    FUN_0038bd40(lVar2);
  }
  return;
}



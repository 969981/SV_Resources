/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032234c; name: FUN_0032234c
 */


void FUN_0032234c(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  undefined **local_50;
  long lStack_48;
  undefined8 local_40;
  
  uVar5 = param_2;
  if (param_2 == 0) {
    lVar9 = *(long *)(param_1 + 0x1a8);
    puVar6 = *(undefined8 **)(lVar9 + 0x58);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar3 = FUN_0037a7b0(*puVar6);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
                    /* try { // try from 003223f8 to 0032242f has its CatchHandler @ 003224c8 */
      FUN_003673f0(&local_50,"call failed");
      uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0x932,&local_50,0,0);
      uVar5 = FUN_00351770(uVar4,3,(long)iVar3);
      puVar7 = *(ulong **)(lVar9 + 0x50);
      if (puVar7 != (ulong *)0x0) {
        puVar6 = *(undefined8 **)((*puVar7 & 0xfffffffffffffffc) + 0x20);
        if ((puVar6 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar6, plVar8 != (long *)0x0)) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
                    /* try { // try from 00322464 to 0032246f has its CatchHandler @ 003224c4 */
        uVar5 = FUN_00351fa0(uVar5,5);
      }
    }
  }
  local_40 = *(undefined8 *)(param_1 + 0x1a8);
  local_50 = &PTR_LAB_04495058;
  lStack_48 = param_1;
                    /* try { // try from 00322390 to 0032239b has its CatchHandler @ 003224cc */
  (**(code **)**(undefined8 **)(param_1 + 0x170))
            (*(undefined8 **)(param_1 + 0x170),uVar5,&local_50,param_1 + 0x150);
  if (param_2 == 0) {
    if (4 < uVar5) {
                    /* try { // try from 00322480 to 00322487 has its CatchHandler @ 003224cc */
      FUN_00350fd0(uVar5);
    }
    lVar9 = *(long *)(param_1 + 0x1d0);
    param_2 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x1d0);
    if (4 < param_2) {
                    /* try { // try from 003223ac to 003223d7 has its CatchHandler @ 003224d0 */
      param_2 = FUN_00350fb0(param_2);
    }
  }
  if (lVar9 == 0) {
    if (4 < param_2) {
                    /* try { // try from 0032249c to 003224a3 has its CatchHandler @ 003224d0 */
      FUN_00350fd0(param_2);
    }
  }
  else {
    (**(code **)(lVar9 + 8))(*(undefined8 *)(lVar9 + 0x10),param_2);
    if (4 < param_2) {
      FUN_00350fd0(param_2);
    }
  }
  return;
}


